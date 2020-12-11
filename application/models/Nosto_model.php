<?php

class Nosto_model extends CI_model
{
  function debit_nosto($id, $summa){
    $this->db->query("call debitNosto($id,$summa)");
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }
}