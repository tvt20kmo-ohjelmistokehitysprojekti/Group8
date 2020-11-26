<?php
/**
 *
 */
class tilitapahtumat_model extends CI_model
{
  function get_tilitapahtumat($id){
    $this->db->select('*');
    $this->db->from('tilitapahtumat');
    if($id !== NULL) {
      $this->db->where('idTilitapahtumat',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_tilitapahtumat($add_data){
    $this->db->insert('tilitapahtumat',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_tilitapahtumat($id, $update_data){
    $this->db->where('idTilitapahtumat',$id);
    $this->db->update('tilitapahtumat',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_tilitapahtumat($id){
    $this->db->where('idTilitapahtumat',$id);
    $this->db->delete('tilitapahtumat');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}