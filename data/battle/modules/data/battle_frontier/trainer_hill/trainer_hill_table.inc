	@ pret/pokeemerald-jp direct xref for 0x085FB90C: trainer_hill.s: PrintOnTrainerHillRecordsWindow
	.globl gTrainerHillData_085FB90C
gTrainerHillData_085FB90C: @ 0x085FB90C
	@ confirmed contiguous ROM pointer table: 4 entries from this address
sPointerTable_085FB90C:
	@ analyzed canonical ROM range 0x085FB90C-0x085FB91B
	@ pointer/nullable table
	.4byte gText_Rom_5FB8F1 + 0xE @ +0x0
	.4byte gText_Rom_5FB902 @ +0x4
	.4byte gText_Rom_5FB905 @ +0x8
	.4byte gText_Rom_5FB905 + 0x3 @ +0xC
	.4byte TrainerHillStartChallenge
	.4byte sub_081D4F2C
	.4byte sub_081D4F78
	.4byte sub_081D5024
	.4byte TrainerHillResumeTimer
	.4byte TrainerHillSetPlayerLost
	.4byte TrainerHillGetChallengeStatus
	.4byte sub_081D5164
	.4byte sub_081D51F4
	.4byte sub_081D5238
	.4byte sub_081D5334
	.4byte sub_081D5C50
	.4byte sub_081D5E4C
	.4byte sub_081D5E7C
	.4byte sub_081D5E9C
	.4byte nullsub_2
	.4byte sub_081D5F08
	.space 0x1, 0xAE
