	@ field-script:0x25735C FieldScriptText_2575D9
	.globl gText_Rom_2575D9
gText_Rom_2575D9: @ 0x082575D9
	.string "きみの　あたらしい　プロフィールを\nおしえて　くれるのかな？"
	.byte EOS
	.if (. - gText_Rom_2575D9) > 0x1f
	.error "gText_Rom_2575D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2575D9) < 0x1f
	.space 0x1f - (. - gText_Rom_2575D9)
	.endif
