	@ data/text/battle_tent.inc:441 BattleTentLobby_Text_ExplainLevelRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_275BCD
gText_Rom_275BCD: @ 0x08275BCD
	.string "バトルテントでは\nあなたの ポケモンの レベルに あわせて\lたいせんする トレーナーの ポケモンの\lレベルが かわります\pただし レベル30より ひくい レベルの\nポケモンを つれた トレーナーが\lとうじょう することは ありません{EOS}"
	.if (. - gText_Rom_275BCD) != 0x75
	.error "gText_Rom_275BCD must retain its original byte length"
	.endif
