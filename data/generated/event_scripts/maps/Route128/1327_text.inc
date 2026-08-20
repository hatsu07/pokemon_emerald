	@ data/maps/Route128/scripts.inc:256 Route128_Text_MaxieThisDefiesBelief
	.globl gText_Rom_1EF171
gText_Rom_1EF171: @ 0x081EF171
	.string "マツブサ『それにしても……\pちょう こだいポケモン……\nなんという パワーだ\lすべての バランスが くずれたぞ……{EOS}"
	.if (. - gText_Rom_1EF171) > 0x3a
	.error "gText_Rom_1EF171 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF171) < 0x3a
	.space 0x3a - (. - gText_Rom_1EF171)
	.endif
