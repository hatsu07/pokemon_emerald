	@ field-script:0x226A2E FieldScriptText_226C8E
	.globl gText_Rom_226C8E
gText_Rom_226C8E: @ 0x08226C8E
	.string "つぎは　7くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - gText_Rom_226C8E) > 0x1d
	.error "gText_Rom_226C8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226C8E) < 0x1d
	.space 0x1d - (. - gText_Rom_226C8E)
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
