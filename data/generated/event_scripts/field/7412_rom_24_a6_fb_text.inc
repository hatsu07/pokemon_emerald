	@ field-script:0x206ECD FieldScriptText_24A6FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24A6FB
gText_Rom_24A6FB: @ 0x0824A6FB
	.string "ポケモン　コンテスト\nつうしん　うけつけへ　ようこそ！\pこちらでは　ともだちと\nおなじ　コンテストに　でられます$"
	.if (. - gText_Rom_24A6FB) != 0x39
	.error "gText_Rom_24A6FB must retain its original byte length"
	.endif
