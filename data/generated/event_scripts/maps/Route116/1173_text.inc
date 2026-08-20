	@ data/maps/Route116/scripts.inc:413 Route116_Text_TokenOfAppreciation
	.globl gText_Rom_1EC206
gText_Rom_1EC206: @ 0x081EC206
	.string "にもつを とどけてくれた ことへの\nかんしゃの きもちとして\lトレーナーさん にも あたらしい\lモンスターボールを プレゼント なのよね!{EOS}"
	.if (. - gText_Rom_1EC206) > 0x46
	.error "gText_Rom_1EC206 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC206) < 0x46
	.space 0x46 - (. - gText_Rom_1EC206)
	.endif
