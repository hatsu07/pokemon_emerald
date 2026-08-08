	@ field-script:0x248D76 FieldScriptText_24A05C
	.globl gText_Rom_24A05C
gText_Rom_24A05C: @ 0x0824A05C
	.string "あら　そちらの　リボンは……\pおきゃくさまの　ポケモンは　もう\nこの　コンテストで　ゆうしょう　したことが\lあるのですね…　それでも　いいですか？$"
	.if (. - gText_Rom_24A05C) > 0x4a
	.error "gText_Rom_24A05C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A05C) < 0x4a
	.space 0x4a - (. - gText_Rom_24A05C)
	.endif
