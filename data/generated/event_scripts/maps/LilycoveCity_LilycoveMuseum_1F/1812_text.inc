	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:200 LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205FB5
gText_Rom_205FB5: @ 0x08205FB5
	.string "くろい いしで つくられた\nおおきい モンスターボールだ!\lむかし おまつりに つかって いたらしい{EOS}"
	.if (. - gText_Rom_205FB5) != 0x33
	.error "gText_Rom_205FB5 must retain its original byte length"
	.endif
