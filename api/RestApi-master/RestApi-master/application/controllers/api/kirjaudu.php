<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Login extends CI_Controller {
    public function check_login(){
        $this->load->model('login_model');
        $kortti=$this->input->get('kortti');
        $plaintext_pin=$this->input->get('PIN');
        $encrypted_pin=$this->login_model->check_login($kortti);

        if(password_verify($plaintext_pin,$encrypted_pin)){
          $result=true;
        }
        else{
          $result=false;
        }
        echo json_encode($result);
    }
}