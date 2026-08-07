@ Trainer prize-money multipliers decoded from 0474_battle_data.inc.
@ ROM range: 0x082EBCE4-0x082EBDC3.
@
@ struct TrainerMoney in the Japanese ROM build occupies 4 bytes:
@   u8 classId
@   u8 value
@   u16 ABI padding
@
@ The final classId 0xFF entry supplies the default value (5).

.macro trainer_money_entry trainerClass:req, value:req
	.byte \trainerClass, \value
	.2byte 0 @ ABI padding
.endm

	.globl gUnknown_82EBCE4
gUnknown_82EBCE4: @ 0x082EBCE4
	.globl gTrainerMoneyTable
gTrainerMoneyTable:
	trainer_money_entry TRAINER_CLASS_TEAM_AQUA, 5
	trainer_money_entry TRAINER_CLASS_AQUA_ADMIN, 10
	trainer_money_entry TRAINER_CLASS_AQUA_LEADER, 20
	trainer_money_entry TRAINER_CLASS_AROMA_LADY, 10
	trainer_money_entry TRAINER_CLASS_RUIN_MANIAC, 15
	trainer_money_entry TRAINER_CLASS_INTERVIEWER, 12
	trainer_money_entry TRAINER_CLASS_TUBER_F, 1
	trainer_money_entry TRAINER_CLASS_TUBER_M, 1
	trainer_money_entry TRAINER_CLASS_SIS_AND_BRO, 3
	trainer_money_entry TRAINER_CLASS_COOLTRAINER, 12
	trainer_money_entry TRAINER_CLASS_HEX_MANIAC, 6
	trainer_money_entry TRAINER_CLASS_LADY, 50
	trainer_money_entry TRAINER_CLASS_BEAUTY, 20
	trainer_money_entry TRAINER_CLASS_RICH_BOY, 50
	trainer_money_entry TRAINER_CLASS_POKEMANIAC, 15
	trainer_money_entry TRAINER_CLASS_SWIMMER_M, 2
	trainer_money_entry TRAINER_CLASS_BLACK_BELT, 8
	trainer_money_entry TRAINER_CLASS_GUITARIST, 8
	trainer_money_entry TRAINER_CLASS_KINDLER, 8
	trainer_money_entry TRAINER_CLASS_CAMPER, 4
	trainer_money_entry TRAINER_CLASS_OLD_COUPLE, 10
	trainer_money_entry TRAINER_CLASS_BUG_MANIAC, 15
	trainer_money_entry TRAINER_CLASS_PSYCHIC, 6
	trainer_money_entry TRAINER_CLASS_GENTLEMAN, 20
	trainer_money_entry TRAINER_CLASS_ELITE_FOUR, 25
	trainer_money_entry TRAINER_CLASS_LEADER, 25
	trainer_money_entry TRAINER_CLASS_SCHOOL_KID, 5
	trainer_money_entry TRAINER_CLASS_SR_AND_JR, 4
	trainer_money_entry TRAINER_CLASS_POKEFAN, 20
	trainer_money_entry TRAINER_CLASS_EXPERT, 10
	trainer_money_entry TRAINER_CLASS_YOUNGSTER, 4
	trainer_money_entry TRAINER_CLASS_CHAMPION, 50
	trainer_money_entry TRAINER_CLASS_FISHERMAN, 10
	trainer_money_entry TRAINER_CLASS_TRIATHLETE, 10
	trainer_money_entry TRAINER_CLASS_DRAGON_TAMER, 12
	trainer_money_entry TRAINER_CLASS_BIRD_KEEPER, 8
	trainer_money_entry TRAINER_CLASS_NINJA_BOY, 3
	trainer_money_entry TRAINER_CLASS_BATTLE_GIRL, 6
	trainer_money_entry TRAINER_CLASS_PARASOL_LADY, 10
	trainer_money_entry TRAINER_CLASS_SWIMMER_F, 2
	trainer_money_entry TRAINER_CLASS_PICNICKER, 4
	trainer_money_entry TRAINER_CLASS_TWINS, 3
	trainer_money_entry TRAINER_CLASS_SAILOR, 8
	trainer_money_entry TRAINER_CLASS_COLLECTOR, 15
	trainer_money_entry TRAINER_CLASS_RIVAL, 15
	trainer_money_entry TRAINER_CLASS_PKMN_BREEDER, 10
	trainer_money_entry TRAINER_CLASS_PKMN_RANGER, 12
	trainer_money_entry TRAINER_CLASS_TEAM_MAGMA, 5
	trainer_money_entry TRAINER_CLASS_MAGMA_ADMIN, 10
	trainer_money_entry TRAINER_CLASS_MAGMA_LEADER, 20
	trainer_money_entry TRAINER_CLASS_LASS, 4
	trainer_money_entry TRAINER_CLASS_BUG_CATCHER, 4
	trainer_money_entry TRAINER_CLASS_HIKER, 10
	trainer_money_entry TRAINER_CLASS_YOUNG_COUPLE, 8
	trainer_money_entry TRAINER_CLASS_WINSTRATE, 10
	trainer_money_entry 0xFF, 5 @ default / terminator
