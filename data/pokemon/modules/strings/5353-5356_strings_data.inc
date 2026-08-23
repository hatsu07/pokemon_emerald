	@ src/strings.c:510 gText_BattlePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattlePokemon
sScriptMenuText_BattlePokemon: @ 0x085CAFE6
	.string "でてくるポケモン{EOS}"
	.if (. - sScriptMenuText_BattlePokemon) != 0x9
	.error "sScriptMenuText_BattlePokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFEA
	.set gText_Rom_5CAFEA, sScriptMenuText_BattlePokemon + 0x4

	@ src/strings.c:511 gText_BattleTrainers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleTrainers
sScriptMenuText_BattleTrainers: @ 0x085CAFEF
	.string "たたかう トレーナー{EOS}"
	.if (. - sScriptMenuText_BattleTrainers) != 0xb
	.error "sScriptMenuText_BattleTrainers must retain its original byte length"
	.endif
