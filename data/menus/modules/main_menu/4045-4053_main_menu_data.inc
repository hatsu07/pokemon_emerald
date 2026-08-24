	@ src/main_menu.c:259 gText_SaveFileCorrupted
	.globl gText_SaveFileCorrupted
gText_SaveFileCorrupted: @ 0x085C8D44
	.string "レポートが せいかくに かかれていないので\nそのまえのレポートを よみます!{EOS}"
	.if (. - gText_SaveFileCorrupted) > 0x27
	.error "gText_SaveFileCorrupted may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveFileCorrupted) < 0x27
	.space 0x27 - (. - gText_SaveFileCorrupted)
	.endif

	@ src/main_menu.c:260 gText_SaveFileErased
	.globl gText_SaveFileErased
gText_SaveFileErased: @ 0x085C8D6B
	.string "レポートの ないようが きえてしまった!{EOS}"
	.if (. - gText_SaveFileErased) > 0x15
	.error "gText_SaveFileErased may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveFileErased) < 0x15
	.space 0x15 - (. - gText_SaveFileErased)
	.endif

	@ src/main_menu.c:261 gJPText_No1MSubCircuit
	.globl gJPText_No1MSubCircuit
gJPText_No1MSubCircuit: @ 0x085C8D80
	.string "1Mサブきばんが ささっていません!{EOS}"
	.if (. - gJPText_No1MSubCircuit) > 0x13
	.error "gJPText_No1MSubCircuit may not grow beyond its original slot"
	.endif
	.if (. - gJPText_No1MSubCircuit) < 0x13
	.space 0x13 - (. - gJPText_No1MSubCircuit)
	.endif

	@ src/main_menu.c:262 gText_BatteryRunDry
	.globl gText_BatteryRunDry
gText_BatteryRunDry: @ 0x085C8D93
	.string "でんちぎれの ために\nとけいが うごかなくなりました\pとけいに かんけいする できごとは おきませんが\nゲームを つづけて あそぶことは できます{EOS}"
	.if (. - gText_BatteryRunDry) > 0x4a
	.error "gText_BatteryRunDry may not grow beyond its original slot"
	.endif
	.if (. - gText_BatteryRunDry) < 0x4a
	.space 0x4a - (. - gText_BatteryRunDry)
	.endif

	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_ContinueMenuPlayer
gText_ContinueMenuPlayer: @ 0x085C8DDD
	.string "しゅじんこう{EOS}"
	.if (. - gText_ContinueMenuPlayer) > 0x7
	.error "gText_ContinueMenuPlayer may not grow beyond its original slot"
	.endif
	.if (. - gText_ContinueMenuPlayer) < 0x7
	.space 0x7 - (. - gText_ContinueMenuPlayer)
	.endif
