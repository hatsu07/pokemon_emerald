	@ data/text/cable_club.inc:1 CableClub_Text_WelcomeWhichCableClubService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247B80
gText_Rom_247B80: @ 0x08247B80
	.string "つうしん ケーブル クラブに\nようこそ!\pどちらを ごりよう ですか?$"
	.if (. - gText_Rom_247B80) != 0x24
	.error "gText_Rom_247B80 must retain its original byte length"
	.endif
