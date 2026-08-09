	@ asm/mystery_event_script.s:553 MEScrCmd_giveribbon
	.globl gText_Rom_5FCB3D
gText_Rom_5FCB3D: @ 0x085FCB3D
	.string "てもちのポケモンに\nとくべつなリボンが　あたえられた！$"
	.if (. - gText_Rom_5FCB3D) > 0x1c
	.error "gText_Rom_5FCB3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB3D) < 0x1c
	.space 0x1c - (. - gText_Rom_5FCB3D)
	.endif
	.globl gUnknown_85FCB59
gUnknown_85FCB59: @ 0x085FCB59

	@ asm/mystery_event_script.s:625 MEScrCmd_enableresetrtc
	.globl gText_Rom_5FCB59
gText_Rom_5FCB59: @ 0x085FCB59
	.string "ずかんに　ぜんこくモードが\nついか　された！$"
	.if (. - gText_Rom_5FCB59) > 0x17
	.error "gText_Rom_5FCB59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB59) < 0x17
	.space 0x17 - (. - gText_Rom_5FCB59)
	.endif
	.globl gUnknown_85FCB70
gUnknown_85FCB70: @ 0x085FCB70

	@ asm/mystery_event_script.s:648 MEScrCmd_addrareword
	.globl gText_Rom_5FCB70
gText_Rom_5FCB70: @ 0x085FCB70
	.string "めずらしい　ことばを　ついかしました$"
	.if (. - gText_Rom_5FCB70) > 0x13
	.error "gText_Rom_5FCB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB70) < 0x13
	.space 0x13 - (. - gText_Rom_5FCB70)
	.endif
	.globl gUnknown_85FCB83
gUnknown_85FCB83: @ 0x085FCB83

	@ asm/mystery_event_script.s:785 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB83
gText_Rom_5FCB83: @ 0x085FCB83
	.string "{0xFD}{0x02}が　おくられてきた！$"
	.if (. - gText_Rom_5FCB83) > 0xd
	.error "gText_Rom_5FCB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB83) < 0xd
	.space 0xd - (. - gText_Rom_5FCB83)
	.endif
	.globl gUnknown_85FCB90
gUnknown_85FCB90: @ 0x085FCB90

	@ asm/mystery_event_script.s:733 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB90
gText_Rom_5FCB90: @ 0x085FCB90
	.string "てもちが　いっぱいなので\n{0xFD}{0x02}は　もらえなかった…$"
	.if (. - gText_Rom_5FCB90) > 0x1a
	.error "gText_Rom_5FCB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB90) < 0x1a
	.space 0x1a - (. - gText_Rom_5FCB90)
	.endif
	.globl gUnknown_85FCBAA
gUnknown_85FCBAA: @ 0x085FCBAA

	@ asm/mystery_event_script.s:821 MEScrCmd_addtrainer
	.globl gText_Rom_5FCBAA
gText_Rom_5FCBAA: @ 0x085FCBAA
	.string "あらたな　トレーナーが\nホウエンに　やってきた$"
	.if (. - gText_Rom_5FCBAA) > 0x18
	.error "gText_Rom_5FCBAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCBAA) < 0x18
	.space 0x18 - (. - gText_Rom_5FCBAA)
	.endif
	@ Replaced baserom.gba range: offset=0x5FCBC2, size=0x1C
	@ semanticized-mass: charmap string (28 bytes including EOS)
	.string "バトルタワ_に　あらたな\nたいせんしゃが　あらわれた！"
	.byte EOS
	.globl gUnknown_85FCBDE
gUnknown_85FCBDE: @ 0x085FCBDE

	@ asm/mystery_event_script.s:44 SetIncompatible
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FCBDE
gText_Rom_5FCBDE: @ 0x085FCBDE
	.string "このデータは　このバージョンでは\nしよう　できません$"
	.if (. - gText_Rom_5FCBDE) != 0x1b
	.error "gText_Rom_5FCBDE must retain its original byte length"
	.endif
