	@ src/main_menu.c:259 gText_SaveFileCorrupted
	.globl gText_Rom_5C8D44
gText_Rom_5C8D44: @ 0x085C8D44
	.string "レポートが せいかくに かかれていないので\nそのまえのレポートを よみます!{EOS}"
	.if (. - gText_Rom_5C8D44) > 0x27
	.error "gText_Rom_5C8D44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D44) < 0x27
	.space 0x27 - (. - gText_Rom_5C8D44)
	.endif

	@ src/main_menu.c:260 gText_SaveFileErased
	.globl gText_Rom_5C8D6B
gText_Rom_5C8D6B: @ 0x085C8D6B
	.string "レポートの ないようが きえてしまった!{EOS}"
	.if (. - gText_Rom_5C8D6B) > 0x15
	.error "gText_Rom_5C8D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D6B) < 0x15
	.space 0x15 - (. - gText_Rom_5C8D6B)
	.endif

	@ src/main_menu.c:261 gJPText_No1MSubCircuit
	.globl gText_Rom_5C8D80
gText_Rom_5C8D80: @ 0x085C8D80
	.string "1Mサブきばんが ささっていません!{EOS}"
	.if (. - gText_Rom_5C8D80) > 0x13
	.error "gText_Rom_5C8D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D80) < 0x13
	.space 0x13 - (. - gText_Rom_5C8D80)
	.endif

	@ src/main_menu.c:262 gText_BatteryRunDry
	.globl gText_Rom_5C8D93
gText_Rom_5C8D93: @ 0x085C8D93
	.string "でんちぎれの ために\nとけいが うごかなくなりました\pとけいに かんけいする できごとは おきませんが\nゲームを つづけて あそぶことは できます{EOS}"
	.if (. - gText_Rom_5C8D93) > 0x4a
	.error "gText_Rom_5C8D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D93) < 0x4a
	.space 0x4a - (. - gText_Rom_5C8D93)
	.endif

	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_5C8DDD
gText_Rom_5C8DDD: @ 0x085C8DDD
	.string "しゅじんこう{EOS}"
	.if (. - gText_Rom_5C8DDD) > 0x7
	.error "gText_Rom_5C8DDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DDD) < 0x7
	.space 0x7 - (. - gText_Rom_5C8DDD)
	.endif
