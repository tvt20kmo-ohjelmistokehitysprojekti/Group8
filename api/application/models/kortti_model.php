<?php
/**
 *
 */
class kortti_model extends CI_model
{
  function get_kortti($id){
    $this->db->select('*');
    $this->db->from('kortti');
    if($id !== NULL) {
      $this->db->where('idKortti',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_kortti($add_data){
    $this->db->insert('kortti',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_kortti($id, $update_data){
    $this->db->where('idKortti',$id);
    $this->db->update('kortti',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_kortti($id){
    $this->db->where('idKortti',$id);
    $this->db->delete('kortti');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}