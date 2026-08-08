	@ field-script:0x256952 FieldScriptText_2569F2
	.globl gText_Rom_2569F2
gText_Rom_2569F2: @ 0x082569F2
	.string "うえから　ひかりが　さしこんでいる！\nダイビングを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_2569F2) > 0x22
	.error "gText_Rom_2569F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2569F2) < 0x22
	.space 0x22 - (. - gText_Rom_2569F2)
	.endif
