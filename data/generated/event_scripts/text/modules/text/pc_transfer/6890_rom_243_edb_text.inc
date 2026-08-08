	@ data/text/pc_transfer.inc:50 gText_NicknameThisPokemon
	.globl gText_Rom_243EDB
gText_Rom_243EDB: @ 0x08243EDB
	.string "{STR_VAR_1}に\nニックネームを つけますか?$"
	.if (. - gText_Rom_243EDB) > 0x13
	.error "gText_Rom_243EDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243EDB) < 0x13
	.space 0x13 - (. - gText_Rom_243EDB)
	.endif
