	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	@ SEMANTIC_ROLE: gText_AlreadySavedFile_Chat (UNION_ROOM_CHAT_OVERWRITE_PROMPT; duplicate provenance gText_AlreadySavedFile)
	.globl gText_AlreadySavedFile_Chat
gText_AlreadySavedFile_Chat: @ 0x085CC6ED
	.string "まえに かかれた レポートに\nうえから かいても いいですか?{EOS}"
	.if (. - gText_AlreadySavedFile_Chat) > 0x20
	.error "gText_AlreadySavedFile_Chat may not grow beyond its original slot"
	.endif
	.if (. - gText_AlreadySavedFile_Chat) < 0x20
	.space 0x20 - (. - gText_AlreadySavedFile_Chat)
	.endif

	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	@ SEMANTIC_ROLE: gText_SavingDontTurnOff_Chat (UNION_ROOM_CHAT_SAVING_TEXT; duplicate provenance gText_SavingDontTurnOff)
	.globl gText_SavingDontTurnOff_Chat
gText_SavingDontTurnOff_Chat: @ 0x085CC70D
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください{EOS}"
	.if (. - gText_SavingDontTurnOff_Chat) > 0x24
	.error "gText_SavingDontTurnOff_Chat may not grow beyond its original slot"
	.endif
	.if (. - gText_SavingDontTurnOff_Chat) < 0x24
	.space 0x24 - (. - gText_SavingDontTurnOff_Chat)
	.endif
