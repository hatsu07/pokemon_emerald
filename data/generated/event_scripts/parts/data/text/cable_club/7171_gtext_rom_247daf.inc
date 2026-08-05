	@ data/text/cable_club.inc:63 CableClub_Text_IncorrectNumberOfParticipants
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247DAF
gText_Rom_247DAF: @ 0x08247DAF
	.string "さんかしている にんずうが\nただしく ありません$"
	.if (. - gText_Rom_247DAF) != 0x19
	.error "gText_Rom_247DAF must retain its original byte length"
	.endif
