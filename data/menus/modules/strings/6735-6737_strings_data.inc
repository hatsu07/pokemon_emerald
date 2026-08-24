	@ src/strings.c:892 gText_WinStreak
	.globl gText_WinStreak
gText_WinStreak: @ 0x085DD41D
	.string "{STR_VAR_1}れんしょう{EOS}"
	.if (. - gText_WinStreak) > 0x8
	.error "gText_WinStreak may not grow beyond its original slot"
	.endif
	.if (. - gText_WinStreak) < 0x8
	.space 0x8 - (. - gText_WinStreak)
	.endif

	@ src/strings.c:893 gText_Current
	.globl gText_Current
gText_Current: @ 0x085DD425
	.string "げんざい{EOS}"
	.if (. - gText_Current) > 0x5
	.error "gText_Current may not grow beyond its original slot"
	.endif
	.if (. - gText_Current) < 0x5
	.space 0x5 - (. - gText_Current)
	.endif
