	@ data/text/cable_club.inc:188 CableClub_Text_PlayerIsWaiting
	.globl gText_Rom_248183
gText_Rom_248183: @ 0x08248183
	.string "あら! いま {STR_VAR_1}さんも\nプレイちゅう みたいですね\lがんばって くださいね!$"
	.if (. - gText_Rom_248183) > 0x28
	.error "gText_Rom_248183 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248183) < 0x28
	.space 0x28 - (. - gText_Rom_248183)
	.endif
