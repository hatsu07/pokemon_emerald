	@ field-script:0x1EA678 FieldScriptText_1EAD65
	.globl gText_Rom_1EAD65
gText_Rom_1EAD65: @ 0x081EAD65
	.string "はー　びっくりした……\pいきなり　すなが　そらから\nバラバラと　ふって　きたんじゃ\pで　なかは　どうじゃった？\nやはり　すなの　オバケ　とか　でたか？$"
	.if (. - gText_Rom_1EAD65) > 0x4c
	.error "gText_Rom_1EAD65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAD65) < 0x4c
	.space 0x4c - (. - gText_Rom_1EAD65)
	.endif
