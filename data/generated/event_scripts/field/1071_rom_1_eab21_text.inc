	@ field-script:0x1EA631 FieldScriptText_1EAB21
	.globl gText_Rom_1EAB21
gText_Rom_1EAB21: @ 0x081EAB21
	.string "もっと　ポケモン　きたえないと\nかちぬくのは　きびしそうだ\pいままでの　ジムリーダーより\nはるかに　つよいと　きくからな\lポケモンリーグにいる　してんのうは！{EOS}"
	.if (. - gText_Rom_1EAB21) > 0x50
	.error "gText_Rom_1EAB21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAB21) < 0x50
	.space 0x50 - (. - gText_Rom_1EAB21)
	.endif
