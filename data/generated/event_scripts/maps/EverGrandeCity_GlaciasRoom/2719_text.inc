	@ data/maps/EverGrandeCity_GlaciasRoom/scripts.inc:67 EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_210691
gText_Rom_210691: @ 0x08210691
	.string "つぎに すすみなさい\pそこで ポケモン リーグの\nほんとうの おそろしさ たしかめなさい{EOS}"
	.if (. - gText_Rom_210691) != 0x2d
	.error "gText_Rom_210691 must retain its original byte length"
	.endif
