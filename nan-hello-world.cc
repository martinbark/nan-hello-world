#include <nan.h>

using v8::FunctionTemplate;

NAN_METHOD(say) {
    info.GetReturnValue().Set(Nan::New("Hello World").ToLocalChecked());
}

NAN_MODULE_INIT(Init) {
  Nan::Set(target, Nan::New("say").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(say)).ToLocalChecked());
}

NODE_MODULE(nan_hello_world, Init)
