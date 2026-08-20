	@ data/maps/MtChimney_CableCarStation/scripts.inc:91 MtChimney_CableCarStation_Text_RideAnotherTime (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_212005
gText_Rom_212005: @ 0x08212005
	.string "またの ごりようを\nよろしく おねがい しまーす!{EOS}"
	.if (. - gText_Rom_212005) != 0x1a
	.error "gText_Rom_212005 must retain its original byte length"
	.endif
