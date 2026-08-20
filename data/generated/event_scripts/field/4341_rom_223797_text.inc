	@ field-script:0x223578 FieldScriptText_223797
	.globl gText_Rom_223797
gText_Rom_223797: @ 0x08223797
	.string "それでは\nこちらに　いる　トレーナーの　なかから\lパートナーを　おさがしください！{EOS}"
	.if (. - gText_Rom_223797) > 0x2a
	.error "gText_Rom_223797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223797) < 0x2a
	.space 0x2a - (. - gText_Rom_223797)
	.endif
