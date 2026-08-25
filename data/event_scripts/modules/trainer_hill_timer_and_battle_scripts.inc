	.globl EventScript_JP_08276CAF
	@ analyzed canonical ROM range 0x08276CAF-0x08276D0B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08276CAF: @ 0x08276CAF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x0007
	@ event command: special
	special CallTrainerHillFunction
	loadword 0x00, TrainerHill_Entrance_Text_ChallengeTime
	callstd 0x04
	releaseall
	end
	.byte 0x16, 0x02, 0x40, 0x01, 0x00, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25, 0xF8, 0x01, 0x21, 0x0D, 0x80
	.byte 0x01, 0x00, 0x06, 0x01, 0xDB, 0x6C, 0x27, 0x08, 0x02
EventText_JP_08276CDB: @ 0x08276CDB
	.string "げはざ{EOS}"
	.byte 0x09, 0x00, 0x06, 0x00, 0x27, 0x02
EventText_JP_08276CE5: @ 0x08276CE5
	.string "にえィし　ゆ{0xF8}あにえィお　ゆ{0xF8}あにあぞあ　いにあぞ　　ぐはざ{EOS}"
	.byte 0x09, 0x00, 0x06, 0x00, 0x27, 0x02, 0x54, 0xFE
	.globl EventScript_JP_08276D0C
	@ analyzed canonical ROM range 0x08276D0C-0x08276D25
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08276D0C: @ 0x08276D0C
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_HILL, 0x01EE, 0x0000, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText
	setvar 0x8004, 0x000B
	@ event command: special
	special CallTrainerHillFunction
	waitmessage
	waitbuttonpress
	closemessage
	end
