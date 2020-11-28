<?php
/**
 *
 */
class Debit_model extends CI_model
{
  function get_debit($id){
    $this->db->select('*');
    $this->db->from('Debit');
    if($id !== NULL) {
      $this->db->where('idDebit',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_debit($add_data){
    $this->db->insert('Debit',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_debit($id, $update_data){
    $this->db->where('idDebit',$id);
    $this->db->update('Debit',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_debit($id){
    $this->db->where('idDebit',$id);
    $this->db->delete('Debit');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}