
	@ pret/pokeemerald-jp direct xref for 0x0852E6C0: wild_encounter.s: StandardWildEncounter, SweetScentWildEncounter
	.globl gBattlePikeWildMonHeaders
gBattlePikeWildMonHeaders: @ 0x0852E6C0
	@ analyzed canonical ROM range 0x0852E6C0-0x0852E723
	wildmonheader 0, 1, gBattlePikeWildMonsInfo_Group1, 0, 0, 0
	wildmonheader 0, 2, gBattlePikeWildMonsInfo_Group2, 0, 0, 0
	wildmonheader 0, 3, gBattlePikeWildMonsInfo_Group3, 0, 0, 0
	wildmonheader 0, 4, gBattlePikeWildMonsInfo_Group4, 0, 0, 0
	wildmonheader 0xFF, 0xFF, 0, 0, 0, 0
	@ pret/pokeemerald-jp direct xref for 0x0852E724: wild_encounter.s: FishingWildEncounter
	.globl gRoute119FeebasFishingMon
gRoute119FeebasFishingMon: @ 0x0852E724
	@ analyzed canonical ROM range 0x0852E724-0x0852E727
	wildmon 20, 25, SPECIES_FEEBAS
