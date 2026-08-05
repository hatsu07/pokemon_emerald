	@ data/text/match_call.inc:739 MatchCall_Text_May4
	.globl gText_Rom_26ADB8
gText_Rom_26ADB8: @ 0x0826ADB8
	.string "ハルカ『{PLAYER}{KUN}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル って いうのよね!"
	.byte EOS
	.if (. - gText_Rom_26ADB8) > 0x3a
	.error "gText_Rom_26ADB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ADB8) < 0x3a
	.space 0x3a - (. - gText_Rom_26ADB8)
	.endif
