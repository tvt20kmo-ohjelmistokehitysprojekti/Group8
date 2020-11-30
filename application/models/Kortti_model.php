<?php
/**
 *
 */
class Kortti_model extends CI_model
{
  function get_kortti($id){
    $this->db->select('*');
    $this->db->from('Kortti');
    if($id !== NULL) {
      $this->db->where('idKortti',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_kortti($add_data){
    $this->db->insert('Kortti',$add_data);
    if($this->db->affected_rows()!==NULL){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }
  function update_kortti($id, $update_data){
    $this->db->where('idKortti',$id);
    $this->db->update('Kortti',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_kortti($id){
    $this->db->where('idKortti',$id);
    $this->db->delete('Kortti');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}