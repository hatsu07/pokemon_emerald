	@ data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc:57 LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon
	.globl LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon: @ 0x0820AA89
	.string "てっとりばやく ポケモンを つよくするなら\nどうぐを あたえるのが いちばん!\pタウリンなら こうげきりょく アップ!\nリゾチウムなら とくこう アップ だぜ!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon) > 0x51
	.error "LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon) < 0x51
	.space 0x51 - (. - LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc:60 LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance: @ 0x0820AADA
	.string "じょうぶな ポケモンに\nなって ほしいからね\pブロムヘキシンで ぼうぎょりょくを あげるか\nキトサンで とくぼうを あげるか\lいま かんがえている ところ なんだ{EOS}"
	.if (. - LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance) != 0x52
	.error "LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance must retain its original byte length"
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc:63 LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon
	.globl LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon: @ 0x0820AB2C
	.string "ポケモンにね\nインドメタシンを あげたら\lすばやさが あがったの!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon) > 0x22
	.error "LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon) < 0x22
	.space 0x22 - (. - LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon)
	.endif
	@ analyzed canonical ROM range 0x0820AB4E-0x0820ABB3
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820AB4E: @ 0x0820AB4E
	.byte 0x00
.globl EventScript_JP_0820AB4F
EventScript_JP_0820AB4F: @ 0x0820AB4F
	loadword 0x00, LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM
	callstd 0x02
	end
.globl EventScript_JP_0820AB58
EventScript_JP_0820AB58: @ 0x0820AB58
	loadword 0x00, LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs
	callstd 0x02
	end
.globl EventScript_JP_0820AB61
EventScript_JP_0820AB61: @ 0x0820AB61
	loadword 0x00, LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves
	callstd 0x02
	end
.globl EventScript_JP_0820AB6A
EventScript_JP_0820AB6A: @ 0x0820AB6A
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820AB84
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x46, 0x01, 0x39, 0x01, 0x2E, 0x01, 0x2F, 0x01, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AB90
EventScript_JP_0820AB90: @ 0x0820AB90
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820ABA8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x31, 0x01, 0x34, 0x01, 0x41, 0x01, 0x30, 0x01, 0x00, 0x00, 0x6C, 0x02
