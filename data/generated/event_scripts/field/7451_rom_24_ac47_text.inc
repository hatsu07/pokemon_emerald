	@ field-script:0x2496B3 FieldScriptText_24AC47
	.globl gText_Rom_24AC47
gText_Rom_24AC47: @ 0x0824AC47
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！{EOS}"
	.if (. - gText_Rom_24AC47) > 0x38
	.error "gText_Rom_24AC47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC47) < 0x38
	.space 0x38 - (. - gText_Rom_24AC47)
	.endif
