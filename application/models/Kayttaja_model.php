<?php
/**
 *
 */
class Kayttaja_model extends CI_model
{
  function get_kayttaja($id){
    $this->db->select('*');
    $this->db->from('Kayttaja');
    if($id !== NULL) {
      $this->db->where('idKayttaja',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_kayttaja($add_data){
    $this->db->insert('Kayttaja',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id(); 
    }
    else {
      return FALSE;
    }  
  }
  function update_kayttaja($id, $update_data){
    $this->db->where('idKayttaja',$id);
    $this->db->update('Kayttaja',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }

  function delete_kayttaja($id){
    $this->db->where('idKayttaja',$id);
    $this->db->delete('Kayttaja');
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }


}
