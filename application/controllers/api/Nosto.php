<?php

defined('BASEPATH') OR exit('No direct script access allowed');


require APPPATH . 'libraries/REST_Controller.php';


class Nosto extends REST_Controller {

    function __construct()
    {
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        parent::__construct();

        $this->load->model('Nosto_model');
    }

    public function index_put()
    {
        $id=$this->put('id');
        $summa=$this->put('summa');
        $result=$this->Nosto_model->debitNosto($id, $summa);

        if($result)
        {
          $message = [
              'Withdraw from card' => $this->put('id'),
              'summa' => $this->put('summa'),
              'message' => 'Withdrawal completed'
          ];

            $this->set_response($message, REST_Controller::HTTP_CREATED); 
        }
        else
        {
            $this->response([
                'status' => FALSE,
                'message' => 'Failed to withdraw'
            ], REST_Controller::HTTP_CONFLICT);
        }
    }
}