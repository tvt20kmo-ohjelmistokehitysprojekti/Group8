<?php

class Login_model extends CI_model
{
  function check_login($idKortti){
    $this->db->select('PIN');
    $this->db->from('Kortti');
    $this->db->where('idKortti', $idKortti);
    return $this->db->get()->row('PIN');
  }
}