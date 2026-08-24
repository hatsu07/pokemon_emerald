	@ src/strings.c:1102 gText_PlayersBattleResults
	.globl gText_PlayersBattleResults
gText_PlayersBattleResults: @ 0x085937E0
	.string "{PLAYER} の たいせん せいせき{EOS}"
	.if (. - gText_PlayersBattleResults) > 0xf
	.error "gText_PlayersBattleResults may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayersBattleResults) < 0xf
	.space 0xf - (. - gText_PlayersBattleResults)
	.endif

	@ src/strings.c:1103 gText_TotalRecordWLD
	.globl gText_TotalRecordWLD
gText_TotalRecordWLD: @ 0x085937EF
	.string "{STR_VAR_1}しょう {STR_VAR_2}はい {STR_VAR_3}ひきわけ{EOS}"
	.if (. - gText_TotalRecordWLD) > 0x12
	.error "gText_TotalRecordWLD may not grow beyond its original slot"
	.endif
	.if (. - gText_TotalRecordWLD) < 0x12
	.space 0x12 - (. - gText_TotalRecordWLD)
	.endif
