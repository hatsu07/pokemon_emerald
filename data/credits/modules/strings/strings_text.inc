	@ src/strings.c:741 gText_PlayerSavedGame_Chat
	.globl gText_PlayerSavedGame_Chat
gText_PlayerSavedGame_Chat: @ 0x085CC731
	.string "{DYNAMIC 0} は\nレポートに しっかり かきのこした!{EOS}"
	.if (. - gText_PlayerSavedGame_Chat) > 0x18
	.error "gText_PlayerSavedGame_Chat may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayerSavedGame_Chat) < 0x18
	.space 0x18 - (. - gText_PlayerSavedGame_Chat)
	.endif

	@ src/strings.c:742 gText_IfLeaderLeavesChatEnds
	.globl gText_IfLeaderLeavesChatEnds
gText_IfLeaderLeavesChatEnds: @ 0x085CC749
	.string "リーダーが やめると かいさん\nになりますが よろしいですか?{EOS}"
	.if (. - gText_IfLeaderLeavesChatEnds) > 0x20
	.error "gText_IfLeaderLeavesChatEnds may not grow beyond its original slot"
	.endif
	.if (. - gText_IfLeaderLeavesChatEnds) < 0x20
	.space 0x20 - (. - gText_IfLeaderLeavesChatEnds)
	.endif
