#include <nan.h>

NAN_METHOD(say) {
  info.GetReturnValue().Set(Nan::New("NAN Hello World").ToLocalChecked());
}

NAN_MODULE_INIT(Init) {
  NAN_EXPORT(target, say);
}

NODE_MODULE(nan_hello_world, Init)
