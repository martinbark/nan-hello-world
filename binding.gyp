{
  "targets": [
    {
      "target_name": "nan-hello-world",
      "sources": [ "nan-hello-world.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
