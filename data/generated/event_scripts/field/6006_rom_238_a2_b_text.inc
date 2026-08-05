	@ field-script:0x2388F3 FieldScriptText_238A2B
	.globl gText_Rom_238A2B
gText_Rom_238A2B: @ 0x08238A2B
	.string "おもえば　ながい　みちのりだった……\nつよい　トレーナーを　もとめて\lただひとり　たびだち……\lここまで　くるのに　どれだけの\lどりょくと　じかんが　ひつようだったか……"
	.byte EOS
	.if (. - gText_Rom_238A2B) > 0x56
	.error "gText_Rom_238A2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238A2B) < 0x56
	.space 0x56 - (. - gText_Rom_238A2B)
	.endif
