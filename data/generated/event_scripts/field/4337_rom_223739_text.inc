	@ field-script:0x223548 FieldScriptText_223739
	.globl gText_Rom_223739
gText_Rom_223739: @ 0x08223739
	.string "こちらに　いる　トレーナーの　なかから\nパートナーを　おさがしください！{EOS}"
	.if (. - gText_Rom_223739) > 0x25
	.error "gText_Rom_223739 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223739) < 0x25
	.space 0x25 - (. - gText_Rom_223739)
	.endif
