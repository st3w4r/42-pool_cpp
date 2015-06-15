Account::Account(int initial_deposit) {
	return;
}

Account::~Account(void) {
	return;
}

// __Getter__
static int	getNbAccounts(void) {
	return Account::_nbAccounts;
}

static int	getTotalAmount(void) {
	return Account::_totalAmount;
}

static int	getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

static int getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

// __Methodes__
static void displayAccountsInfos(void) {

}

void	makeDeposit( int deposit ) {

}

bool	makeWithdrawal( int withdrawal ) {

}

int		checkAmount( void ) const {

}

void	displayStatus( void ) const {

}

static void	_displayTimestamp( void ) {

}

Account::Account(void) {
	return;
}
