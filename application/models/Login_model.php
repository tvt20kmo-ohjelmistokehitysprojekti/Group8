<?php

class Login_model extends CI_model
{
  function check_login($kortti){
    $this->db->select('pin');
    $this->db->from('Kortti');
    $this->db->where('Kortti', $kortti);
    return $this->db->get()->row('pin');
  }
}