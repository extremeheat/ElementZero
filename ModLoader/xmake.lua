target ("ModLoader")
  on_load (function (target)
    assert (is_plat("windows"), "Only support windows platform")
  end)
  set_kind ("shared")
  add_files ("*.cpp")
  set_basename ("Chakra")
  add_packages ("funchook", "chakra_core")