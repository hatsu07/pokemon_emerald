	@ field-script:0x21EA16 FieldScriptText_262922
	.globl gText_Rom_262922
gText_Rom_262922: @ 0x08262922
	.string "ホウエンに　いない　みずポケモンを\nさがしに　きたんだけど……\pみずうみは　どこにあるのか\nきみ　しってるかい？$"
	.if (. - gText_Rom_262922) > 0x39
	.error "gText_Rom_262922 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262922) < 0x39
	.space 0x39 - (. - gText_Rom_262922)
	.endif
