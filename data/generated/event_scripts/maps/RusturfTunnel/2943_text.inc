	@ data/maps/RusturfTunnel/scripts.inc:442 RusturfTunnel_Text_WhyCantTheyKeepDigging
	.globl gText_Rom_213B76
gText_Rom_213B76: @ 0x08213B76
	.string "……\pどうして これいじょう ほれない……\nこの いわが かたすぎるのか?\pこのさきの シダケタウンという ところに\nあいする かのじょが いるのに……\pカナズミと シダケを トンネルで むすべば\nまいにち かのじょに あいに いける\pそれなのに……\nおれは どうすれば いいんだ……{EOS}"
	.if (. - gText_Rom_213B76) > 0x8f
	.error "gText_Rom_213B76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213B76) < 0x8f
	.space 0x8f - (. - gText_Rom_213B76)
	.endif
