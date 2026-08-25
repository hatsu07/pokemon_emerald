	@ field-script:0x226A0B FieldScriptText_226BFD
	.globl FieldScriptText_226BFD
FieldScriptText_226BFD: @ 0x08226BFD
	.string "つぎは　2くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - FieldScriptText_226BFD) > 0x1d
	.error "FieldScriptText_226BFD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_226BFD) < 0x1d
	.space 0x1d - (. - FieldScriptText_226BFD)
	.endif
	@ field-script:0x226A12 FieldScriptText_226C1A
	.globl FieldScriptText_226C1A
FieldScriptText_226C1A: @ 0x08226C1A
	.string "つぎは　3くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - FieldScriptText_226C1A) > 0x1d
	.error "FieldScriptText_226C1A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_226C1A) < 0x1d
	.space 0x1d - (. - FieldScriptText_226C1A)
	.endif
	@ field-script:0x226A19 FieldScriptText_226C37
	.globl FieldScriptText_226C37
FieldScriptText_226C37: @ 0x08226C37
	.string "つぎは　4くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - FieldScriptText_226C37) > 0x1d
	.error "FieldScriptText_226C37 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_226C37) < 0x1d
	.space 0x1d - (. - FieldScriptText_226C37)
	.endif
	@ field-script:0x226A20 FieldScriptText_226C54
	.globl FieldScriptText_226C54
FieldScriptText_226C54: @ 0x08226C54
	.string "つぎは　5くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - FieldScriptText_226C54) > 0x1d
	.error "FieldScriptText_226C54 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_226C54) < 0x1d
	.space 0x1d - (. - FieldScriptText_226C54)
	.endif
	@ field-script:0x226A27 FieldScriptText_226C71
	.globl FieldScriptText_226C71
FieldScriptText_226C71: @ 0x08226C71
	.string "つぎは　6くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - FieldScriptText_226C71) > 0x1d
	.error "FieldScriptText_226C71 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_226C71) < 0x1d
	.space 0x1d - (. - FieldScriptText_226C71)
	.endif
	@ field-script:0x226A2E FieldScriptText_226C8E
	.globl FieldScriptText_226C8E
FieldScriptText_226C8E: @ 0x08226C8E
	.string "つぎは　7くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - FieldScriptText_226C8E) > 0x1d
	.error "FieldScriptText_226C8E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_226C8E) < 0x1d
	.space 0x1d - (. - FieldScriptText_226C8E)
	.endif
	@ analyzed canonical ROM range 0x08226CAB-0x08226D52
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08226CAB: @ 0x08226CAB
	.string "つぎは　2くみめの　あいてです\nがんばって　ください!{EOS}"
EventText_JP_08226CC7: @ 0x08226CC7
	.string "つぎは　3くみめの　あいてです\nがんばって　ください!{EOS}"
EventText_JP_08226CE3: @ 0x08226CE3
	.string "つぎは　4くみめの　あいてです\nがんばって　ください!{EOS}"
EventText_JP_08226CFF: @ 0x08226CFF
	.string "つぎは　5くみめの　あいてです\nがんばって　ください!{EOS}"
EventText_JP_08226D1B: @ 0x08226D1B
	.string "つぎは　6くみめの　あいてです\nがんばって　ください!{EOS}"
EventText_JP_08226D37: @ 0x08226D37
	.string "つぎは　7くみめの　あいてです\nがんばって　ください!{EOS}"
