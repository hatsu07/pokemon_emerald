	@ data/maps/LittlerootTown/scripts.inc:922 LittlerootTown_Text_WearTheseRunningShoes
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E4388
gText_Rom_1E4388: @ 0x081E4388
	.string "ママ『{PLAYER}! {PLAYER}!\nオダマキはかせに あいさつ した?\pあら! かわいい ポケモン!\nオダマキはかせ に いただいたのね\pやっぱり パパの こども なのね……\nポケモンと いっしょに いるのが\lさまに なっているわよ!\pほらっ! ぼうけんに でるなら\nランニングシューズを はくと いいわ!\pいろんな ところ\nはしれるように なるわよ!$"
	.if (. - gText_Rom_1E4388) != 0xaa
	.error "gText_Rom_1E4388 must retain its original byte length"
	.endif
