	@ field-script:0x1F0D86 FieldScriptText_1F117C
	.globl gText_Rom_1F117C
gText_Rom_1F117C: @ 0x081F117C
	.string "ユウキ『{0xFD}{0x01}か\pいま　ポケモンずかんを\nチェック　してたんだ\pまだまだ　つかまえていない\nポケモンも　いるけど\lかなり　いい　かんじだろ？\pこうして　ずかんを　みていると\nまた　ぼうけんに　いきたくなるな{EOS}"
	.if (. - gText_Rom_1F117C) > 0x67
	.error "gText_Rom_1F117C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F117C) < 0x67
	.space 0x67 - (. - gText_Rom_1F117C)
	.endif
